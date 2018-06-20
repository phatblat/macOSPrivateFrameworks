//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ScreenReaderCore/SCRCMathExpression.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface SCRCMathArrayExpression : SCRCMathExpression
{
    NSArray *_children;
}

- (void).cxx_destruct;
- (id)suffixForChildAtIndex:(unsigned long long)arg1;
- (id)prefixForChildAtIndex:(unsigned long long)arg1;
- (id)localizableSuffixForChildAtIndex:(unsigned long long)arg1;
- (id)localizablePrefixForChildAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NSArray *mathMLAttributes;
@property(readonly, nonatomic) NSString *mathMLTag;
- (BOOL)hasSimpleArrayOfChildren;
- (id)mathMLString;
- (id)speakableSegmentsWithSpeakingStyle:(int)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3;
- (id)childSpeakableSegmentsWithSpeakingStyle:(int)arg1 upToDepth:(unsigned long long)arg2 parentTreePosition:(id)arg3 childIndex:(unsigned long long *)arg4;
- (id)speakableDescriptionWithSpeakingStyle:(int)arg1 arePausesAllowed:(BOOL)arg2;
- (id)children;
- (id)subExpressions;
- (id)description;
- (id)initWithDictionary:(id)arg1;

@end

