//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NeutrinoCore/NUPattern.h>

@class NSArray;

@interface NUGroupPattern : NUPattern
{
    struct NSArray *_group;
}

@property(readonly) NSArray *group; // @synthesize group=_group;
- (void).cxx_destruct;
- (BOOL)match:(id)arg1 location:(unsigned long long *)arg2 count:(unsigned long long *)arg3;
- (BOOL)isEqualToGroupPattern:(id)arg1;
- (BOOL)isEqualToPattern:(id)arg1;
- (id)stringRepresentation;
- (id)optimizedPattern;
- (id)shortestMatch;
- (BOOL)isFixedOrder;
- (id)tokens;
- (id)initWithGroup:(id)arg1;
- (id)init;

@end

