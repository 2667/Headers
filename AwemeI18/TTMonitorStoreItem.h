//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSMutableArray;

@interface TTMonitorStoreItem : NSObject <NSCoding, NSCopying>
{
    long long _retryCount;
    NSMutableArray *_pool;
}

@property(retain, nonatomic) NSMutableArray *pool; // @synthesize pool=_pool;
@property(nonatomic) long long retryCount; // @synthesize retryCount=_retryCount;
- (void).cxx_destruct;
- (void)clear;
- (id)currentPool;
- (_Bool)isEmpty;
- (void)event:(id)arg1 label:(id)arg2 attribute:(float)arg3;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

