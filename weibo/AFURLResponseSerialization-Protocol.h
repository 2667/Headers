//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSData, NSURLResponse;

@protocol AFURLResponseSerialization <NSObject, NSSecureCoding, NSCopying>
- (id)responseObjectForResponse:(NSURLResponse *)arg1 data:(NSData *)arg2 error:(id *)arg3;
@end

