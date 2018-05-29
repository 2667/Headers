//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, TTURLNavigatorPattern;

@interface TTURLMap : NSObject
{
    NSMutableDictionary *_objectMappings;
    NSMutableArray *_objectPatterns;
    NSMutableArray *_fragmentPatterns;
    NSMutableDictionary *_stringPatterns;
    NSMutableDictionary *_schemes;
    TTURLNavigatorPattern *_defaultObjectPattern;
    TTURLNavigatorPattern *_hashPattern;
    _Bool _invalidPatterns;
}

- (id)URLForObject:(id)arg1 withName:(id)arg2;
- (id)URLForObject:(id)arg1;
- (_Bool)isAppURL:(id)arg1;
- (_Bool)isSchemeSupported:(id)arg1;
- (long long)transitionForURL:(id)arg1;
- (int)navigationModeForURL:(id)arg1;
- (id)dispatchURL:(id)arg1 toTarget:(id)arg2 query:(id)arg3;
- (id)objectForURL:(id)arg1 query:(id)arg2 pattern:(id *)arg3;
- (id)objectForURL:(id)arg1 query:(id)arg2;
- (id)objectForURL:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectForURL:(id)arg1;
- (void)removeObject:(id)arg1;
- (void)removeURL:(id)arg1;
- (void)setObject:(id)arg1 forURL:(id)arg2;
- (void)from:(Class)arg1 name:(id)arg2 toURL:(id)arg3;
- (void)from:(Class)arg1 toURL:(id)arg2;
- (void)from:(id)arg1 parent:(id)arg2 toModalViewController:(id)arg3 selector:(SEL)arg4 transition:(long long)arg5;
- (void)from:(id)arg1 toModalViewController:(id)arg2 transition:(long long)arg3;
- (void)from:(id)arg1 toModalViewController:(id)arg2 selector:(SEL)arg3;
- (void)from:(id)arg1 toModalViewController:(id)arg2;
- (void)from:(id)arg1 parent:(id)arg2 toSharedViewController:(id)arg3 selector:(SEL)arg4;
- (void)from:(id)arg1 parent:(id)arg2 toSharedViewController:(id)arg3;
- (void)from:(id)arg1 toSharedViewController:(id)arg2 selector:(SEL)arg3;
- (void)from:(id)arg1 toSharedViewController:(id)arg2;
- (void)from:(id)arg1 parent:(id)arg2 toViewController:(id)arg3 selector:(SEL)arg4 transition:(long long)arg5;
- (void)from:(id)arg1 toViewController:(id)arg2 transition:(long long)arg3;
- (void)from:(id)arg1 toViewController:(id)arg2 selector:(SEL)arg3;
- (void)from:(id)arg1 toViewController:(id)arg2;
- (void)from:(id)arg1 toObject:(id)arg2 selector:(SEL)arg3;
- (void)from:(id)arg1 toObject:(id)arg2;
- (void)dealloc;
- (id)init;
- (_Bool)isExternalURL:(id)arg1;
- (_Bool)isWebURL:(id)arg1;
- (id)matchObjectPattern:(id)arg1;
- (void)addStringPattern:(id)arg1 forURL:(id)arg2 withName:(id)arg3;
- (void)addObjectPattern:(id)arg1 forURL:(id)arg2;
- (void)registerScheme:(id)arg1;
- (id)keyForClass:(Class)arg1 withName:(id)arg2;

@end

