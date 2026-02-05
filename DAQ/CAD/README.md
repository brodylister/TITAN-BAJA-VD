# DAQ Electrical CAD Overview

This folder contains the **CAD documentation for the on-vehicle Data Acquisition (DAQ) electrical system**, including wiring layouts, connector organization, and harness routing. The purpose of this CAD is to clearly communicate how the electrical system is physically and electrically connected, making it easier to build, troubleshoot, and modify the DAQ harness.

For circuit systems, CAD is used to:
- Visualize wiring routes and connector locations  
- Define wire types, gauges, and colors  
- Reduce wiring errors during assembly  
- Provide clear documentation for future revisions  

---

## Wire Color & Gauge Standards

The DAQ electrical system follows a consistent wire color and gauge standard to simplify identification, troubleshooting, and future modifications.

### Power & Ground
- **Red – 18 AWG**  
  - 12V power supply  

- **Black – 18 AWG**  
  - Ground (GND)  

### Low-Voltage & Logic Signals
- **Orange – 22 AWG**  
  - 5V power  

- **Pink – 22 AWG**  
  - Logic signal  

- **Dark Blue – 22 AWG**  
  - Logic signal  

### Shielded Signal
- **Green – 22 AWG, Shielded**  
  - Noise-sensitive sensor signals  

---

## Live Transmission Cable Color Standards

To clearly identify live transmission connections in CAD and during assembly, the following cable color standards are used:

- **Maroon**  
  - U.FL → SMA antenna cable (base station)

- **Purple**  
  - LMR-400 coaxial cable (base station)

---

## RTC (QT / Qwiic) Cable Color Standards

The RTC connections use QT (Qwiic) cabling with the following color assignments:

- **Violet**  
  - QT → QT connection  

- **Grey**  
  - QT → external connection  

---

## Notes

Wire and cable colors are selected based on current requirements, signal sensitivity, and ease of identification. Shielded wiring is used where necessary to reduce electrical noise and improve signal reliability, especially for sensitive sensor and communication lines.

This CAD documentation serves as the primary reference for DAQ harness fabrication and should be followed during assembly, testing, and future revisions.
