
import { useForm } from 'react-hook-form';

// zod

function Signup(){

    const {register, handleSubmit,formState: { errors },} = useForm();

    // const submittedData = (data)=>{
    //     console.log(data);
    // }

    const submittedData = (data) => {
        console.log(data)

    }

    return(
        <>
        <form onSubmit={handleSubmit(submittedData)}>
        <input {...register('firstName')} 
        placeholder='Enter Name'/>
        <input {...register('email')} 
        placeholder="Enter Email"/>
        
        <input {...register('password')} 
        placeholder="Enter Password"/>
        <button type='submut' className='btn btn-lg'>Submit</button>
        </form>
        </>
    )
}

//{
//    name:"firstName"
//    onChange:{}
//    onBlur:{}
// }



export default Signup































































// import { useState } from "react";

// function Signup(){
   
//         const [name,setName]=useState("");
//         const [email,setEmail]=useState("");
//         const [password,setPassword]=useState("");
//         const handdleSubmit=(e)=>{
//             e.preventDefault();
//             // validation logic here

//             console.log(name,email,password);

//         }
//         return(
//         <>
//         <form onSubmit={handdleSubmit}>
//             <input type="text" placeholder='Enter your firstName' value={name} onChange={(e)=>setName(e.target.value)}></input>
//             <input type="email" placeholder=' Enter yourEmail' value={email} onChange={(e)=>setEmail(e.target.value)}></input>
//             <input type="password" placeholder=' Enter Your Password' value={password} onChange={(e)=>setPassword(e.target.value)}></input>
//             <button type='submit'>Signup</button>
//             </form>,

//         </>
//     )

// }
// export default Signup