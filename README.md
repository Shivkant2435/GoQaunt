# Recreating the README.md file after state reset.

readme_content = """

# GoQuant Trading Bot: Efficient Order Management and Execution in C++

GoQuant is a command-line-based trading bot designed to interact seamlessly with Deribit Testnet for order management, portfolio handling, and trading automation.

## Build Instructions

### Prerequisites

Ensure your system has the following installed:

- A C++ compiler (e.g., `g++`)
- [CMake](https://cmake.org/download/)
- Boost and OpenSSL libraries

**Installation Commands:**

For macOS:

```bash
brew install cmake boost openssl
For Linux:

bash
Always show details

sudo apt install cmake libboost-all-dev libssl-dev
For Windows:

Download CMake, Boost, and OpenSSL from their respective official websites and follow the installation instructions.
Building the Project
Clone the repository:
bash
Always show details

git clone https://github.com/GoQuant/TradingBot.git
Create a build directory and navigate to it:
bash
Always show details

mkdir build && cd build
Build the project using CMake:
bash
Always show details

cmake ..
cmake --build .
Run the application:
bash
Always show details

./GoQuantBot
Usage Instructions
Basic Commands
help: Display all supported commands.
quit: Close connections and exit the program.
show <id>: Display metadata for a specific connection.
send <id> <message>: Send a message through a specific connection.
show_messages <id>: Display all exchanged messages for a connection.
Connecting to Deribit Testnet
Establish a connection:
bash
Always show details

connect wss://test.deribit.com/ws/api/v2
Example Output: Created connection with id 0.
Verify connection status:
bash
Always show details

show 0
Authentication
Authenticate with your Deribit API credentials:

bash
Always show details

authorize <connection_id> <client_id> <client_secret> -r
-r: Optional flag to retain the session token.
Trading Commands
Place Orders:
bash
Always show details

buy <id> <instrument> <transaction_name>
sell <id> <instrument> <transaction_name>
Specify details like amount, order type, and time-in-force when prompted.
Manage Orders:
bash
Always show details

get_open_orders <id>
modify <id> <order_id>
cancel <id> <order_id>
cancel_all <id> <options>
Key Features
WebSocket Integration: Efficient real-time communication with Deribit Testnet.
Custom Order Management: Buy, sell, modify, or cancel orders with ease.
Interactive Command-Line Interface: Simplified user interaction.
```
