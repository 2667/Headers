//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_PBGeneratedMessage.h"

@class GMSx_GSFeatureIdProto, NSString;

@interface GMSx_PlaceId : GMSx_PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GMSx_GSFeatureIdProto *featureId; // @dynamic featureId;
@property(nonatomic) _Bool hasFeatureId; // @dynamic hasFeatureId;
@property(nonatomic) _Bool hasSubFeatureName; // @dynamic hasSubFeatureName;
@property(retain, nonatomic) NSString *subFeatureName; // @dynamic subFeatureName;

@end
