//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class FBSDKShareOpenGraphObject, FBSDKSharePhoto, NSArray, NSDictionary, NSEnumerator, NSNumber, NSString, NSURL;

@protocol FBSDKShareOpenGraphValueContaining <NSObject, NSSecureCoding>
- (NSURL *)URLForKey:(NSString *)arg1;
- (NSString *)stringForKey:(NSString *)arg1;
- (void)setURL:(NSURL *)arg1 forKey:(NSString *)arg2;
- (void)setString:(NSString *)arg1 forKey:(NSString *)arg2;
- (void)setPhoto:(FBSDKSharePhoto *)arg1 forKey:(NSString *)arg2;
- (void)setObject:(FBSDKShareOpenGraphObject *)arg1 forKey:(NSString *)arg2;
- (void)setNumber:(NSNumber *)arg1 forKey:(NSString *)arg2;
- (void)setArray:(NSArray *)arg1 forKey:(NSString *)arg2;
- (void)removeObjectForKey:(NSString *)arg1;
- (FBSDKSharePhoto *)photoForKey:(NSString *)arg1;
- (void)parseProperties:(NSDictionary *)arg1;
- (id)objectForKeyedSubscript:(NSString *)arg1;
- (FBSDKShareOpenGraphObject *)objectForKey:(NSString *)arg1;
- (NSEnumerator *)objectEnumerator;
- (NSNumber *)numberForKey:(NSString *)arg1;
- (NSEnumerator *)keyEnumerator;
- (void)enumerateKeysAndObjectsUsingBlock:(void (^)(NSString *, id, _Bool *))arg1;
- (NSArray *)arrayForKey:(NSString *)arg1;
@end

