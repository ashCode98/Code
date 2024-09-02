const task = document.querySelector('.task')
const add = document.querySelector('.add')
const user_tasks = document.querySelector('.user-tasks')
const ul = document.querySelector('ul')

add.addEventListener('click', () => {
    if (task.value === "") {
        alert("Please enter a task")
    }
    else {
        const li = document.createElement('li')
        li.textContent = task.value

        const newImg = document.createElement('img')
        newImg.src = "images/unchecked.png"
        newImg.style = "float: left; padding: 0px 8px; cursor: pointer; width: 19px; height: 19px;"

        const closeButton = document.createElement('button')
        closeButton.textContent = "X"
        closeButton.style = "cursor: pointer;border: none; background-color: white; position: absolute;right: 40%;"

        li.append(newImg)
        li.append(closeButton)
        ul.appendChild(li)

        newImg.addEventListener("click", () => {
            newImg.src = "images/checked.png"
            li.style = "text-decoration: line-through;"
        })

        closeButton.addEventListener("click", () => {
            li.remove();
        })
    }
})