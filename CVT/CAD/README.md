# CVT Electrical CAD Overview

This folder contains the **CAD documentation for the CVT electrical system**, including wiring layouts, connector organization, and harness routing. The purpose of this CAD is to clearly communicate how the electrical system is physically and electrically connected, making it easier to build, troubleshoot, and modify the harness.

For circuit systems, CAD is used to:
- Visualize wiring routes and connector locations  
- Define wire types, gauges, and colors  
- Reduce wiring errors during assembly  
- Provide clear documentation for future revisions  

---

## Wire Color & Gauge Standards

The CVT electrical system follows a consistent wire color and gauge standard to simplify identification and troubleshooting.

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
- **Green – 22 AWG**  
  - Noise-sensitive sensor signals  

---

## Notes

Wire colors and gauges are selected based on current requirements, signal sensitivity, and durability. Shielded wiring is used where necessary to reduce electrical noise and improve signal reliability.

This CAD documentation serves as the reference for harness fabrication and should be followed during assembly and testing.
