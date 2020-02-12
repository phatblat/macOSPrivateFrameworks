//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface SGList : NSObject
{
    id <SGListDelegate> _delegate;
    CDUnknownBlockType _comparator;
    NSMutableArray *_array;
}

@property(retain, nonatomic) NSMutableArray *array; // @synthesize array=_array;
@property(copy, nonatomic) CDUnknownBlockType comparator; // @synthesize comparator=_comparator;
@property(nonatomic) __weak id <SGListDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)items;
- (unsigned long long)indexOfItem:(id)arg1;
- (id)itemAtIndex:(unsigned long long)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (void)removeAllItems;
- (BOOL)removeItem:(id)arg1;
- (BOOL)addItem:(id)arg1;
- (unsigned long long)count;
- (id)init;

@end
