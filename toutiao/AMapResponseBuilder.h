//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface AMapResponseBuilder : NSObject
{
}

+ (void)buildNearbyResponseWithData:(id)arg1 error:(id *)arg2;
+ (id)buildResponseWithData:(id)arg1 responseClass:(Class)arg2 error:(id *)arg3;
+ (id)errorDescriptionWithInfoKey:(id)arg1;
+ (id)errorCodeWithInfoKey:(id)arg1;
+ (id)errorWithInfo:(id)arg1;
+ (id)errorWithURLError:(id)arg1;

@end

