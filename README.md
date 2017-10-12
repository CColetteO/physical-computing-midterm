# Midterm IoT Project

Name:  Kate O'Hanlon

Due Date: 10/12/2017

## Project: "Brand Name" or Device Name

### Conceptual Description

/// Replace with a description of the ***critical / conceptual dimensions of your project***, with specific reference to the key issues it engages.  These should intersect with the issues that have been explored in the readings and discussions during the first half of class:  eWaste, data security/ownership in relation to corporate cloud infrastructures; critical making; surveillance and privacy, etc. ** *How does your project engage with these issues beyond mere instrumentality?* ** ///

This project focuses on data ownership and surveillance. So much of what we do online using "free" services is actually at the expense of our privacy. To this end, this is designed to track Twitter usage as an advertiser would. It triggers an LED when a post is made that might mean the person is anticipating a major life event that could be very useful to advertisers that know about it, such as a baby, wedding, or move. (See [this article](http://www.businessinsider.com/the-incredible-story-of-how-target-exposed-a-teen-girls-pregnancy-2012-2), or [this one](http://www.dailymail.co.uk/news/article-2102859/How-Target-knows-shoppers-pregnant--figured-teen-father-did.html) if you want more details, for an idea of just how much companies can learn from relatively little data!) Every time the LED lights up, this is a further hint to anyone with access to your posts that 

### Form

/// Your project should be embodied in a ***physical form*** that reflects, embodies, and/or amplifies those your project's main concepts and ideas.
Explain your design choices here and include images that document your project's material embodiment. ///
The physical form furthers the imagery, as this data gathering is largely hidden behind walls of exciting products that you might not recognize the full cost of. In addition, it hints at the issue of e-waste; though mostly plastic, each item in the case represents a company with huge numbers of servers, sensors, employee computers, and more. 

**Finished Enclosure:**

![Finished Enclosure](finished_enclosure.jpg)

**Electronics Exposed:**

![Enclosure with electronics exposed](exposed_enclosure.jpg)

### Technical Details
//   
Here you should give an overview of the technical operation of your device, including:
* A wiring diagram
* list of hardware used
* Explanation of your
* Link to code   

//

You can include code snippets here:

```
Particle.subscribe("Execute", messageParse, MY_DEVICES);
```

but also link to your project's full code in this repository:  [photon.ino](photon.ino)



**Wiring Diagram**

![Wiring Diagram](WiringDiagram.png)
