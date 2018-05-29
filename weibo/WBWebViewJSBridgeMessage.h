//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface WBWebViewJSBridgeMessage : NSObject
{
    long long _type;
    NSString *_callbackID;
    NSString *_eventName;
    NSString *_action;
    NSDictionary *_parameters;
    long long _status;
}

+ (id)messageWithDictionary:(id)arg1;
+ (id)messageWithCallbackID:(id)arg1 status:(long long)arg2;
+ (id)messageWithEvent:(id)arg1;
+ (id)message;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(retain, nonatomic) NSString *action; // @synthesize action=_action;
@property(retain, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
@property(retain, nonatomic) NSString *callbackID; // @synthesize callbackID=_callbackID;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool success;
@property(readonly, nonatomic) NSString *JSONString;

@end

