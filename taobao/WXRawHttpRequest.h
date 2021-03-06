//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXStringHttpRequest.h"

@class NSString, WXOAccountContext;

@interface WXRawHttpRequest : WXStringHttpRequest
{
    WXOAccountContext *_context;
    NSString *_ownUser;
}

+ (id)requestWithDelegate:(id)arg1 withParameters:(id)arg2;
+ (id)requestWithDelegate:(id)arg1;
+ (id)getDicFromJsonData:(id)arg1;
+ (id)parseResult:(id)arg1;
+ (id)hintTextForError:(id)arg1;
@property(retain, nonatomic) NSString *ownUser; // @synthesize ownUser=_ownUser;
@property(nonatomic) __weak WXOAccountContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)processResult;
- (unsigned long long)shouldStarted;
- (_Bool)handleResult;
- (id)getStaticParams;
- (_Bool)isSuccess;
- (id)getRequestHost;
- (void)doRequestWithParams:(id)arg1;
- (id)initWithContext:(id)arg1;

@end

