//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class KSSingleLinkedListNode;

@interface KSSingleLinkedList : NSObject <NSCopying>
{
    unsigned long long _count;
    KSSingleLinkedListNode *_head;
}

@property(retain, nonatomic) KSSingleLinkedListNode *head; // @synthesize head=_head;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)each:(CDUnknownBlockType)arg1;
- (id)debugDescription;
- (_Bool)deduplicate;
- (void)exchangeNodeAtIndex:(unsigned long long)arg1 withIndex:(unsigned long long)arg2;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)nodeAtIndex:(unsigned long long)arg1;
- (void)deleteNodeAtIndex:(unsigned long long)arg1;
- (void)appendNode:(id)arg1;

@end

