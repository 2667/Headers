//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AdhocKeychain : NSObject
{
    NSString *_keyPrefix;
}

+ (id)stringForKey:(id)arg1;
+ (_Bool)setString:(id)arg1 forKey:(id)arg2 accessibility:(void *)arg3;
+ (_Bool)setString:(id)arg1 forKey:(id)arg2;
+ (void)initialize;
@property(retain, nonatomic) NSString *keyPrefix; // @synthesize keyPrefix=_keyPrefix;
- (void).cxx_destruct;
- (id)stringForKey:(id)arg1;
- (_Bool)setString:(id)arg1 forKey:(id)arg2 accessibility:(void *)arg3;
- (_Bool)setString:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (_Bool)setObject:(id)arg1 forKey:(id)arg2 accessibility:(void *)arg3;
- (id)_hierarchicalKey:(id)arg1;
- (id)_query;
- (id)_service;
- (id)init;

@end
