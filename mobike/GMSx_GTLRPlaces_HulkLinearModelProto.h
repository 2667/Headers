//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GTLRObject.h"

@class GMSx_GTLRPlaces_FeatureDerivationConfig, GMSx_GTLRPlaces_MultilogitRankingModelProto, NSArray, NSString;

@interface GMSx_GTLRPlaces_HulkLinearModelProto : GMSx_GTLRObject
{
}

+ (id)arrayPropertyToClassMap;

// Remaining properties
@property(retain) GMSx_GTLRPlaces_FeatureDerivationConfig *featureDerivationConfig; // @dynamic featureDerivationConfig;
@property(retain) GMSx_GTLRPlaces_MultilogitRankingModelProto *globalModel; // @dynamic globalModel;
@property(retain) NSArray *localModels; // @dynamic localModels;
@property(copy) NSString *type; // @dynamic type;

@end
