//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AXMediaUtilities/AXMLayoutItem.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface AXMLayoutLine : AXMLayoutItem
{
    NSMutableArray *_sequences;
}

+ (id)line:(id)arg1;
- (void).cxx_destruct;
- (id)sequences;
- (void)addSequence:(id)arg1;
- (struct CGRect)normalizedFrame;
- (struct CGRect)frame;

@end

