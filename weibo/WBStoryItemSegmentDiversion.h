//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBModelObject.h"

@class NSDictionary, NSString;

@interface WBStoryItemSegmentDiversion : WBModelObject
{
    unsigned long long _diversionType;
    NSString *_diversionName;
    NSString *_bgImageUrl;
    NSString *_iconUrl;
    NSString *_scheme;
    NSDictionary *_actionLog;
}

@property(retain, nonatomic) NSDictionary *actionLog; // @synthesize actionLog=_actionLog;
@property(retain, nonatomic) NSString *scheme; // @synthesize scheme=_scheme;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) NSString *bgImageUrl; // @synthesize bgImageUrl=_bgImageUrl;
@property(retain, nonatomic) NSString *diversionName; // @synthesize diversionName=_diversionName;
@property(nonatomic) unsigned long long diversionType; // @synthesize diversionType=_diversionType;
- (void).cxx_destruct;
- (_Bool)updateWithDictionary:(id)arg1;

@end

