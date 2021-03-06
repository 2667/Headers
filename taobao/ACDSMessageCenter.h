//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBAccsCallbackProtocol-Protocol.h"

@class ACDSThreadSafeMutableArray, NSString;

@interface ACDSMessageCenter : NSObject <TBAccsCallbackProtocol>
{
    _Bool _executing;
    _Bool _systemHot;
    ACDSThreadSafeMutableArray *_messageList;
}

+ (void)run;
+ (void)directRoute:(id)arg1:(id)arg2;
+ (void)route;
+ (id)serviceID;
+ (CDUnknownBlockType)callBack;
+ (id)sharedInstance;
@property _Bool systemHot; // @synthesize systemHot=_systemHot;
@property _Bool executing; // @synthesize executing=_executing;
@property(retain, nonatomic) ACDSThreadSafeMutableArray *messageList; // @synthesize messageList=_messageList;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

