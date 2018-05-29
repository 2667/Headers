//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WBTextActiveRange-Protocol.h"

@class NSString;

@interface WBFlavoredRange : NSObject <WBTextActiveRange>
{
    int _flavor;
    id _userInfo;
    id _dataBinding;
    struct _NSRange _range;
}

+ (id)valueWithRange:(struct _NSRange)arg1;
@property(retain, nonatomic) id dataBinding; // @synthesize dataBinding=_dataBinding;
@property(nonatomic) int flavor; // @synthesize flavor=_flavor;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *keyRangeText;
@property(readonly, nonatomic) struct _NSRange keyRange;
@property(readonly, nonatomic) NSString *rangeText;
@property(readonly, nonatomic) NSString *text;
@property(readonly, nonatomic) NSString *flavorName;
- (struct _NSRange)keyTextRange;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

