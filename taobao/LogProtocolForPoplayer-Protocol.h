//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol LogProtocolForPoplayer <NSObject>
+ (void)error:(NSString *)arg1 params:(NSDictionary *)arg2 content:(NSString *)arg3;
+ (void)warn:(NSString *)arg1 params:(NSDictionary *)arg2 content:(NSString *)arg3;
+ (void)info:(NSString *)arg1 params:(NSDictionary *)arg2 content:(NSString *)arg3;
+ (void)debug:(NSString *)arg1 params:(NSDictionary *)arg2 content:(NSString *)arg3;
@end
