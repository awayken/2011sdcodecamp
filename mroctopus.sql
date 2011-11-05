CREATE DATABASE  IF NOT EXISTS `mroctopus` /*!40100 DEFAULT CHARACTER SET utf8 */;
USE `MrOctopus`;
-- MySQL dump 10.13  Distrib 5.1.34, for apple-darwin9.5.0 (i386)
--
-- Host: localhost    Database: MrOctopus
-- ------------------------------------------------------
-- Server version	5.1.48

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `Joke`
--

DROP TABLE IF EXISTS `Joke`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `Joke` (
  `JokeId` int(11) NOT NULL AUTO_INCREMENT,
  `Joke` text,
  `JokeType` int(11) DEFAULT NULL COMMENT '	',
  `Rating` float DEFAULT NULL,
  `IsActive` bit(1) NOT NULL DEFAULT b'1',
  `IsDeleted` bit(1) NOT NULL DEFAULT b'0',
  PRIMARY KEY (`JokeId`)
) ENGINE=MyISAM AUTO_INCREMENT=6 DEFAULT CHARSET=utf8 COMMENT='Lists jokes.';
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `Joke`
--

LOCK TABLES `Joke` WRITE;
/*!40000 ALTER TABLE `Joke` DISABLE KEYS */;
INSERT INTO `Joke` VALUES (1,'Why did the Ghost walk into the bar? For the BOO-ze.',1,5,'','\0'),(2,'Why did the Ghost walk into the bar? For the spirits.',1,2,'\0','\0'),(3,'Why do the French only have one egg for breakfast? Because, in French, one egg is un oeuf.',6,3.14,'','\0'),(4,'A thief broke into the local police station and stole all the toilets and urinals, leaving no clues. A spokesperson was quoted as saying, \"We have absolutely nothing to go on.\"',6,2.25,'','\0'),(5,'A marine biologist developed a race of genetically engineered dolphins that could live forever if they were fed a steady diet of seagulls. One day, his supply of the birds ran out so he had to go out and trap some more. On the way back, he spied two lions asleep on the road. Afraid to wake them, he gingerly stepped over them. Immediately, he was arrested and charged with transporting gulls across sedate lions for immortal porpoises.',7,2,'','\0');
/*!40000 ALTER TABLE `Joke` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `JokeType`
--

DROP TABLE IF EXISTS `JokeType`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `JokeType` (
  `JokeTypeId` int(11) NOT NULL AUTO_INCREMENT,
  `Name` varchar(256) DEFAULT NULL,
  `IsActive` bit(1) NOT NULL DEFAULT b'1',
  `IsDeleted` bit(1) NOT NULL DEFAULT b'0',
  PRIMARY KEY (`JokeTypeId`)
) ENGINE=MyISAM AUTO_INCREMENT=8 DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `JokeType`
--

LOCK TABLES `JokeType` WRITE;
/*!40000 ALTER TABLE `JokeType` DISABLE KEYS */;
INSERT INTO `JokeType` VALUES (1,'Nomenclature & Taxonomy','','\0'),(2,'Knock, Knock','','\0'),(3,'Expectation Meeting','','\0'),(4,'Expectation Shorting','','\0'),(5,'Analogy & Metaphor','','\0'),(6,'Pun','','\0'),(7,'Pun (Convoluted)','','\0');
/*!40000 ALTER TABLE `JokeType` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2011-11-05 21:50:49
