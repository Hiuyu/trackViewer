% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/listResolutions.R
\name{listResolutions}
\alias{listResolutions}
\title{List the available resolutions}
\usage{
listResolutions(file, format = c("hic", "cool"), unit = "BP")
}
\arguments{
\item{file}{character(1). File name of .hic or .cool/.mcool/.scool}

\item{format}{character(1). File format, "hic" or "cool".}

\item{unit}{character(1). Resolution unit, "BP" or "FRAG". For hic file only.}
}
\description{
List the resolutions available in the file.
}
\examples{
hicfile <- system.file("extdata", "test_chr22.hic", package="trackViewer")
listResolutions(hicfile)
coolfile <- system.file("extdata", "test.mcool", package="trackViewer")
listResolutions(coolfile, format="cool")
}
