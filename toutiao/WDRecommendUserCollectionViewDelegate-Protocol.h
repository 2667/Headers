//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSString, WDFRRecommendCardStructModel;

@protocol WDRecommendUserCollectionViewDelegate <NSObject>
- (NSDictionary *)impressionParams;
- (void)trackWithEvent:(NSString *)arg1 extraDic:(NSDictionary *)arg2;

@optional
- (NSString *)categoryID;
- (void)onCardEmpty;
- (void)onRemoveModel:(WDFRRecommendCardStructModel *)arg1 originalModels:(NSArray *)arg2;
@end

