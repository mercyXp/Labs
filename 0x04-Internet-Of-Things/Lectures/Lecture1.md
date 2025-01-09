# Introduction to IoT – Overview of Technologies

## Lecture 1: Introduction to IoT

The **Internet of Things (IoT)** is a global computational network that connects various physical objects capable of interacting with each other and the external environment. IoT networks include not only traditional computing devices like computers and smartphones but also virtually any kind of object. By 2020, the number of “smart things” approached 50 billion, including lamps, microwaves, refrigerators, and air conditioners.

### What is IoT?

The Internet of Things is a concept for a data transmission network between physical objects ("things") equipped with built-in tools and technologies for interacting with each other or the external environment. Such networks have the potential to transform economic and social processes, reducing the need for human involvement in certain operations.

- **Origins**: The concept of IoT was formulated in 1999, focusing on radio-frequency identification (**RFID**) for object interaction.
- **Evolution**: Since the 2010s, IoT has become a stable trend, driven by:
  - Widespread use of wireless networks
  - Emergence of cloud computing
  - Development of machine-to-machine (**M2M**) technologies
  - Transition to **IPv6**
  - Adoption of software-defined networks (**SDN**)

---

### How IoT Works

Various protocols and technologies enable communication between electronic devices:

1. **Wired Network Connection**:  
   - High-speed, reliable data transmission.
   - Limited mobility, typically used for PCs, servers, and printers.
   
2. **Mobile Networks (3G/4G/5G)**:  
   - Provide wide coverage and high speeds (up to 1-2 Gbps with 5G).
   
3. **Short-Range Wireless Technologies**:  
   - **Wi-Fi**, **Bluetooth**, **Wi-Max**: Enable connectivity within homes, offices, or buildings.
   
4. **RFID & NFC**:  
   - **Radio Frequency Identification (RFID)**: Automatically identifies objects using radio signals.  
   - **Near Field Communication (NFC)**: Used for short-distance communication between devices.

5. **Satellite Internet**:  
   - Increasingly viable in remote areas with networks like Starlink.

Using these technologies, smart objects can interact on local or global scales. IoT devices generate data through sensors or detectors, process it using built-in controllers, and transmit it to cloud storage or data centers for analysis and remote control.

---

### The Internet of Things Today

The applications of IoT are practically limitless. Properly implemented IoT systems can lead to significant economic and operational benefits. Below is a real-world example:

- **Smart Trash Bins by BigBelly**:  
  In several major U.S. cities, BigBelly deployed smart trash bins equipped with sensors that monitor fill levels. These sensors transmit data to the cloud, enabling optimized waste collection routes. This system saves time, reduces fuel consumption, and extends equipment lifespan. Future plans include automating garbage collection using self-driving vehicles.

---

## Contents

1. **History**  
2. **Technologies**  
   2.1 **Identification Tools**  
   2.2 **Measurement Tools**  
   2.3 **Data Transmission Tools**  
3. **Applications**  
   3.1 **Consumer Applications**  
      - 3.1.1 **Smart Home**  
      - 3.1.2 **Elderly Care**  
   3.2 **Enterprise Applications**  
      - 3.2.1 **Healthcare**  
      - 3.2.2 **Transportation**  
   3.3 **Industrial Applications**  
      - 3.3.1 **Manufacturing**  
      - 3.3.2 **Agriculture**  
      - 3.3.3 **Food Industry**  
   3.4 **Infrastructure Applications**  
      - 3.4.1 **Energy Management**  
      - 3.4.2 **Environmental Monitoring**  
      - 3.4.3 **Living Laboratory**  
   3.5 **Military Applications**  
      - 3.5.1 **IoT on the Battlefield**  
      - 3.5.2 **Ocean of Things**  
   3.6 **Product Digitization**  
4. **Trends and Characteristics**  
   4.1 **Intelligence**  
   4.2 **Architecture**  
5. **Predictions**  
6. **References**  
7. **Literature**  
8. **Links**

---
# History of IoT

The concept and term **Internet of Things (IoT)** were first introduced by **Kevin Ashton**, founder of the research group Auto-ID Labs at the Massachusetts Institute of Technology (MIT), in **1999** during a presentation for **Procter & Gamble’s management**. The presentation highlighted how the widespread use of **RFID tags** could revolutionize the company’s logistics management system.

### Key Milestones in IoT History

- **2004**: A comprehensive article was published in *Scientific American*, showcasing how household appliances, home systems, sensors, and "things" (e.g., medications with identification tags) can communicate via networks to automate processes like starting coffee makers, adjusting lighting, and reminding users to take medication. The integration of devices into a unified network using **internet protocols** helped popularize the IoT concept.

- **2008**: The **National Intelligence Council** of the United States recognized IoT as one of six disruptive technologies. The report raised concerns about national information security, as common objects could be turned into internet nodes without user awareness.

- **2008–2009**: Cisco analysts marked this period as the true birth of IoT, as the number of devices connected to the global network exceeded the Earth's population. This transformation from the "Internet of People" to the "Internet of Things" marked a significant milestone.

- **2009**: The European Commission began supporting the annual **"Internet of Things"** conference in **Brussels**, bringing together government officials, industry leaders, and researchers.

- **Early 2010s**: IoT became a driving force behind the **fog computing** paradigm. Fog computing extends cloud computing principles to geographically distributed devices, providing a platform for IoT applications.

---

## Technologies

### 2.1 Identification Tools

In IoT, physical objects that may not have built-in connectivity require **identification technologies**. While **RFID** was the initial driving force, other technologies for automatic identification are also used, such as:

- Optically recognizable identifiers (e.g., **barcodes**, **QR codes**, **Data Matrix codes**)
- **Real-time Location Systems (RTLS)**

As IoT grows, ensuring the uniqueness of identifiers is essential, leading to the need for standardization.

- **MAC Address**: Traditional identifier for internet-connected devices, allowing identification at the data link layer.
- **IPv6**: Provides unique network-level addresses, supporting up to 300 million unique addresses per person on Earth, making it suitable for the vast number of IoT devices.

### 2.2 Measurement Tools

Measurement tools play a crucial role in converting environmental data into machine-readable information. These tools enrich the IoT network with meaningful data. Key measurement tools include:

- **Basic Sensors**: Temperature, pressure, and light sensors.
- **Smart Meters**
- **Integrated Measurement Systems**

IoT networks require integrating measurement tools into **wireless sensor networks** or **measurement complexes** for **Machine-to-Machine (M2M)** communication. A challenge in IoT implementation is maximizing the autonomy of measurement tools, particularly concerning sensor power supply. Solutions like **solar cells**, **energy harvesting**, and **wireless power transmission** are being developed to scale sensor networks without increasing maintenance costs.

### 2.3 Data Transmission Tools

IoT devices rely on various **data transmission technologies**, both wireless and wired:

#### Wireless Transmission

Key features for IoT wireless transmission include:

- Efficiency at low data rates
- Fault tolerance
- Adaptability
- Self-organizing capabilities

Relevant standards include **IEEE 802.15.4**, which defines the physical and media access control layers for low-power personal area networks. This standard forms the basis for protocols like:

- **ZigBee**
- **WirelessHART**
- **MiWi**
- **6LoWPAN**
- **LPWAN (Low Power Wide Area Network)**

#### Wired Transmission

For wired transmission, technologies such as **Power Line Communication (PLC)** play a significant role, especially in environments where power lines are available (e.g., vending machines, ATMs, smart meters). Additionally, **6LoWPAN** is crucial for IoT, as it provides an IPv6 layer over both **IEEE 802.15.4** and **PLC** and is standardized by the **IETF**.

---

This document outlines the history and key technologies behind IoT, focusing on its evolution, key milestones, and current tools for identification, measurement, and data transmission.

