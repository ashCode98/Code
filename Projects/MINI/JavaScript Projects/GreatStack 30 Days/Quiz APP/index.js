const questions = [
  {
    question: "Capital of France?",
    answers: [
      { text: "Berlin", correct: false },
      { text: "Madrid", correct: false },
      { text: "Paris", correct: true },
      { text: "Rome", correct: false },
    ],
  },
  {
    question: "Which planet is the red Planet?",
    answers: [
      { text: "Earth", correct: false },
      { text: "Mars", correct: true },
      { text: "Jupiter", correct: false },
      { text: "Venus", correct: false },
    ],
  },
  {
    question: "Which is a Python data type?",
    answers: [
      { text: "String", correct: false },
      { text: "Integer", correct: false },
      { text: "List", correct: false },
      { text: "All of these", correct: true },
    ],
  },
  {
    question: "Keyword to create an object in Java?",
    answers: [
      { text: "new", correct: true },
      { text: "create", correct: false },
      { text: "object", correct: false },
      { text: "make", correct: false },
    ],
  },
  {
    question: "Year World War II ended?",
    answers: [
      { text: "1942", correct: false },
      { text: "1945", correct: true },
      { text: "1948", correct: false },
      { text: "1948", correct: false },
    ],
  },
  {
    question: "Largest ocean on Earth?",
    answers: [
      { text: "Atlantic", correct: false },
      { text: "Indian", correct: false },
      { text: "Pacific", correct: true },
      { text: "Arctic", correct: false },
    ],
  },
  {
    question: "Currency of Japan?",
    answers: [
      { text: "Yen", correct: true },
      { text: "Won", correct: false },
      { text: "Dollar", correct: false },
      { text: "Peso", correct: false },
    ],
  },
];

import

const q = document.querySelector("p");
const answerBtn = document.querySelector(".op");
const next_btn = document.querySelector("#next-btn");

console.log("something new")

let currentQuestionIndex = 0;
let userScore = 0;

function startQuiz() {
  currentQuestionIndex = 0;
  userScore = 0;
  showQuestion();
}

function showQuestion() {
  resetState();
  if (currentQuestionIndex == 5) {
    yourScore();
  }

  const randomIndex = Math.floor(Math.random() * questions.length);
  const question = questions[randomIndex].question;

  q.innerHTML = `${currentQuestionIndex + 1}. ${question}`;

  for (let i = 0; i < 4; i++) {
    answerBtn.children[i].innerHTML = questions[randomIndex].answers[i].text;
    answerBtn.children[i].onclick = () =>
      handleAns(i, questions[randomIndex].answers[i].correct);
  }
  currentQuestionIndex++;
}

function newThing() {

}

function handleAns(index, isCorrect) {
  if (isCorrect == true) {
    userScore++;
    answerBtn.children[index].style.backgroundColor = "green";
  } else {
    answerBtn.children[index].style.backgroundColor = "red";
  }

  //Disabling all the buttons
  for (let i = 0; i < 4; i++) {
    answerBtn.children[i].disabled = true;
  }
}

function resetState() {
  for (let i = 0; i < 4; i++) {
    answerBtn.children[i].backgroundColor = "initial";
    answerBtn.children[i].disabled = false;
  }
}

next_btn.onclick = function () {
  showQuestion();
};

function yourScore() {
  const qna = document.querySelector(".qna");
  qna.innerHTML = `Your score is: ${userScore}/5`;
  next_btn.disabled = true;
}

startQuiz();

console.log("Good is everything")