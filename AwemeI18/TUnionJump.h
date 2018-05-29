//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TUnionJumpService-Protocol.h"

@class NSString;
@protocol TUnionCommonProtocol, TUnionTBApplinkProtocol;

@interface TUnionJump : NSObject <TUnionJumpService>
{
    id <TUnionTBApplinkProtocol> _tbApplinkImp;
    id <TUnionCommonProtocol> _common;
}

@property(retain, nonatomic) id <TUnionCommonProtocol> common; // @synthesize common=_common;
@property(retain, nonatomic) id <TUnionTBApplinkProtocol> tbApplinkImp; // @synthesize tbApplinkImp=_tbApplinkImp;
- (void).cxx_destruct;
- (id)URLWithJumpPage:(id)arg1;
- (void)show:(id)arg1 targetPage:(id)arg2 params:(id)arg3 jumpType:(unsigned long long)arg4 webView:(id)arg5 jumpSuccess:(CDUnknownBlockType)arg6 jumpFailed:(CDUnknownBlockType)arg7;
- (void)show:(id)arg1 targetPage:(id)arg2 params:(id)arg3 jumpType:(unsigned long long)arg4 webView:(id)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

