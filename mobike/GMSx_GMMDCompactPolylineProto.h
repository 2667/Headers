//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_PBGeneratedMessage.h"

@class GMSx_PBMutableArray;

@interface GMSx_GMMDCompactPolylineProto : GMSx_PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasLatitudeE7DiffArray; // @dynamic hasLatitudeE7DiffArray;
@property(nonatomic) _Bool hasLongitudeE7DiffArray; // @dynamic hasLongitudeE7DiffArray;
@property(nonatomic) _Bool hasSimplificationWorldUnits; // @dynamic hasSimplificationWorldUnits;
@property(retain, nonatomic) GMSx_PBMutableArray *latitudeE7DiffArray; // @dynamic latitudeE7DiffArray;
@property(retain, nonatomic) GMSx_PBMutableArray *longitudeE7DiffArray; // @dynamic longitudeE7DiffArray;
@property(nonatomic) int simplificationWorldUnits; // @dynamic simplificationWorldUnits;

@end

