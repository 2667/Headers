//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, TTGuideAmountResonseModel, UIView;

@interface TTGuideAmountManager : NSObject
{
    TTGuideAmountResonseModel *_model;
    UIView *_cacheView;
    NSDictionary *_cacheParams;
}

+ (id)manager;
@property(retain, nonatomic) NSDictionary *cacheParams; // @synthesize cacheParams=_cacheParams;
@property(retain, nonatomic) UIView *cacheView; // @synthesize cacheView=_cacheView;
@property(retain, nonatomic) TTGuideAmountResonseModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (id)getEventParam;
- (id)getShowViewWithTabID:(id)arg1 withAid:(id)arg2 trigerAction:(unsigned long long)arg3;
- (id)getOutModelWithTabID:(id)arg1 withAid:(id)arg2 trigerAction:(unsigned long long)arg3;
- (void)startFetchData;

@end

