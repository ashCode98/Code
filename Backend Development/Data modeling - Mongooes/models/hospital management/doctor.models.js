import mongooes, { mongo } from 'mongoose';

const doctorSchema = new mongooes.Schema(
  {
    name: {
      type: String,
      required: true,
    },
    salary: {
      type: Number,
      required: true,
    },
    qualification: {
      type: String,
      required: true,
    },
    experienceInYears: {
      type: Number,
      default: 0,
    },
    worksInHospitals: [
      {
        type: mongooes.Schema.Types.ObjectId,
        ref: 'Hospital',
      },
    ],
  },
  { timestamps: true }
);

export const Doctor = mongooes.model('Doctor', doctorSchema);
