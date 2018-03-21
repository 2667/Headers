//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface MCOfficialBubbleManager : NSObject
{
    NSMutableDictionary *_registeBubbles;
    NSMutableDictionary *_officialBubbles;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSMutableDictionary *officialBubbles; // @synthesize officialBubbles=_officialBubbles;
@property(retain, nonatomic) NSMutableDictionary *registeBubbles; // @synthesize registeBubbles=_registeBubbles;
- (void).cxx_destruct;
- (void)clearCache;
- (void)recycleBubble:(id)arg1 withStyle:(long long)arg2 subStyle:(id)arg3;
- (id)bubbleWithStyle:(long long)arg1 subStyle:(id)arg2;
- (void)registeBubble:(Class)arg1 withStyle:(long long)arg2 subStyle:(id)arg3;
- (id)init;

@end
