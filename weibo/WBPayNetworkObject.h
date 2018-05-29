//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface WBPayNetworkObject : NSObject
{
    NSDictionary *_resultDic;
    long long _errorCode;
    NSString *_message;
}

+ (id)objWithErrorCode:(long long)arg1 message:(id)arg2 dataDic:(id)arg3;
+ (id)objWithErrorCode:(long long)arg1 dictionary:(id)arg2;
+ (id)objWithErrorCode:(long long)arg1 message:(id)arg2;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) NSDictionary *resultDic; // @synthesize resultDic=_resultDic;
- (void).cxx_destruct;

@end

