//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class ATConfIntercept, ATPageConfig, NSArray, NSString;
@protocol ATConfigItem;

@interface ATConfigModel : TBJSONModel
{
    NSString *_pageName;
    NSString *_spmA;
    NSString *_spmB;
    NSArray<ATConfigItem> *_items;
    ATConfIntercept *_intercept;
    NSString *_rule;
    ATPageConfig *_pageConf;
}

@property(nonatomic) __weak ATPageConfig *pageConf; // @synthesize pageConf=_pageConf;
@property(retain, nonatomic) NSString *rule; // @synthesize rule=_rule;
@property(retain, nonatomic) ATConfIntercept *intercept; // @synthesize intercept=_intercept;
@property(retain, nonatomic) NSArray<ATConfigItem> *items; // @synthesize items=_items;
@property(retain, nonatomic) NSString *spmB; // @synthesize spmB=_spmB;
@property(retain, nonatomic) NSString *spmA; // @synthesize spmA=_spmA;
@property(retain, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
- (void).cxx_destruct;

@end

