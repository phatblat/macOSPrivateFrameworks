//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AXMediaUtilities/AXMEvaluationNode.h>

@interface AXMVisionNode : AXMEvaluationNode
{
    unsigned long long _recognitionOptions;
}

+ (id)title;
+ (BOOL)isSupported;
@property(nonatomic) unsigned long long recognitionOptions; // @synthesize recognitionOptions=_recognitionOptions;
- (BOOL)requiresVisionFramework;

@end

