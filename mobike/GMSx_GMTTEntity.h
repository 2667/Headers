//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_PBGeneratedMessage.h"

@class GMSx_GMGEOMCamera, GMSx_GMTTLatLng, NSString;

@interface GMSx_GMTTEntity : GMSx_PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSString *featureId; // @dynamic featureId;
@property(nonatomic) _Bool hasFeatureId; // @dynamic hasFeatureId;
@property(nonatomic) _Bool hasInputCamera; // @dynamic hasInputCamera;
@property(nonatomic) _Bool hasIsGeocode; // @dynamic hasIsGeocode;
@property(nonatomic) _Bool hasIsInteractive; // @dynamic hasIsInteractive;
@property(nonatomic) _Bool hasPinnableZoomBound; // @dynamic hasPinnableZoomBound;
@property(nonatomic) _Bool hasPoint; // @dynamic hasPoint;
@property(nonatomic) _Bool hasQuery; // @dynamic hasQuery;
@property(retain, nonatomic) GMSx_GMGEOMCamera *inputCamera; // @dynamic inputCamera;
@property(nonatomic) _Bool isGeocode; // @dynamic isGeocode;
@property(nonatomic) _Bool isInteractive; // @dynamic isInteractive;
@property(nonatomic) int pinnableZoomBound; // @dynamic pinnableZoomBound;
@property(retain, nonatomic) GMSx_GMTTLatLng *point; // @dynamic point;
@property(retain, nonatomic) NSString *query; // @dynamic query;

@end
