//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface TLScenePromotionController : NSObject
{
    NSMutableDictionary *_promotionStore;
}

+ (id)shareScenePromotionController;
@property(retain, nonatomic) NSMutableDictionary *promotionStore; // @synthesize promotionStore=_promotionStore;
- (void).cxx_destruct;
- (id)currentSceneSpaceObjectInfo;
- (void)refreshSceneSpaceObjectInfo;
- (id)init;

@end

