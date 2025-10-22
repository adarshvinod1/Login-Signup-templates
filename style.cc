*{
    margin: 0;
    padding: 0;
    box-sizing: border-box;
}

body {
    font-family: 'Arial', sans-serif;
    background: #1a1a2e;
    min-height: 100vh;
    display: flex;
    justify-content: center;
    align-items: center;
}

.login-container {
    width: 100%;
    max-width: 400px;
    padding: 20px;
}

.login-box {
    background: #16213e;
    padding: 40px;
    border-radius: 10px;
    box-shadow: 0 4px 20px rgba(0, 0, 0, 0.3);
}

h1 {
    color: #ffffff;
    font-size: 32px;
    margin-bottom: 8px;
}

.subtitle {
    color: #94a3b8;
    font-size: 14px;
    margin-bottom: 30px;
}

.input-group {
    margin-bottom: 20px;
}

label {
    display: block;
    color: #cbd5e1;
    font-size: 14px;
    margin-bottom: 8px;
}

input[type="email"],
input[type="password"] {
    width: 100%;
    padding: 12px 16px;
    background: #0f1419;
    border: 1px solid #2d3748;
    border-radius: 6px;
    color: #ffffff;
    font-size: 15px;
    transition: border-color 0.3s;
}

input[type="email"]:focus,
input[type="password"]:focus {
    outline: none;
    border-color: #6366f1;
}

input::placeholder {
    color: #64748b;
}

.options {
    display: flex;
    justify-content: space-between;
    align-items: center;
    margin-bottom: 25px;
}

.checkbox {
    display: flex;
    align-items: center;
    color: #cbd5e1;
    font-size: 14px;
    cursor: pointer;
}

.checkbox input[type="checkbox"] {
    margin-right: 8px;
    cursor: pointer;
}

.forgot {
    color: #6366f1;
    text-decoration: none;
    font-size: 14px;
    transition: color 0.3s;
}

.forgot:hover {
    color: #818cf8;
}

.btn-login {
    width: 100%;
    padding: 12px;
    background: #6366f1;
    border: none;
    border-radius: 6px;
    color: #ffffff;
    font-size: 16px;
    font-weight: 600;
    cursor: pointer;
    transition: background 0.3s;
}

.btn-login:hover {
    background: #4f46e5;
}

.btn-login:active {
    background: #4338ca;
}

.signup {
    text-align: center;
    margin-top: 25px;
    color: #94a3b8;
    font-size: 14px;
}

.signup a {
    color: #6366f1;
    text-decoration: none;
    font-weight: 600;
}

.signup a:hover {
    color: #818cf8;
}

@media (max-width: 480px) {
    .login-box {
        padding: 30px 25px;
    }
}