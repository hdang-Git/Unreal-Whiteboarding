// Fill out your copyright notice in the Description page of Project Settings.


#include "DrawLinePoints.h"

TArray<FVector2D> UDrawLinePoints::DrawLineBetweenPoints(FVector2D startPt, FVector2D endPt)
{
	TArray<FVector2D> listOfPoints = TArray<FVector2D>();
	FVector2D zeroVector = FVector2D(0.0, 0.0);
	float percentageError = 0.00001;
	if (!startPt.Equals(zeroVector, percentageError) && !endPt.Equals(zeroVector, percentageError)) {
		float x = startPt.X;
		float y = startPt.Y;
		float dx = endPt.X - startPt.X;
		float dy = endPt.Y - startPt.Y;
		float steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);
		//steps *= 100;
		float xIncrement = dx / steps;
		float yIncrement = dy / steps;
		listOfPoints.Add(startPt);
		for (int i = 0; i < steps; i++) {
			x += xIncrement;
			y += yIncrement;
			FVector2D tempVector = FVector2D(x, y);
			listOfPoints.Add(tempVector);
		}
		//float x = startPt.X;
		//float y = startPt.Y;
		//for (int i = 0; i <= 1000; i++) {
		//	x += 0.001;
		//	y += 0.001;
		//	listOfPoints.Add(FVector2D(x, y));

		//}
	} else {
		FVector2D point = abs(startPt.X) > abs(endPt.X) || abs(startPt.Y) > abs(endPt.Y) ? startPt : endPt;
		listOfPoints.Add(point);
	}

	return listOfPoints;
}

TArray<FVector2D> UDrawLinePoints::LerpBetweenPoints(FVector2D startPt, FVector2D endPt)
{
	TArray<FVector2D> listOfPoints = TArray<FVector2D>();
	FVector2D zeroVector = FVector2D(0.0, 0.0);
	float percentageError = 0.00001;
	TArray<FVector2D> arrayOfPoints = TArray<FVector2D>();

	if (!startPt.Equals(zeroVector, percentageError) && !endPt.Equals(zeroVector, percentageError)) {
		float x0 = startPt.X;
		float y0 = startPt.Y;

		float x1 = endPt.X;
		float y1 = endPt.Y;
		for (float t = 0.01; t < 1.00f; t += 0.01f) {
			float lerpX = FMath::Lerp(x0, x1, t);
			float lerpY = FMath::Lerp(y0, y1, t);
			arrayOfPoints.Add(FVector2D(lerpX, lerpY));
		}
	
	} else {
		FVector2D point = abs(startPt.X) > abs(endPt.X) || abs(startPt.Y) > abs(endPt.Y) ? startPt : endPt;
		arrayOfPoints.Add(point);
	}
	return arrayOfPoints;
}
