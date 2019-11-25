//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WorkflowKit/WFParameter.h>

@class NSNumber, WFImage;

@interface WFSliderParameter : WFParameter
{
    NSNumber *_minimumValue;
    NSNumber *_maximumValue;
}

@property(retain, nonatomic) NSNumber *maximumValue; // @synthesize maximumValue=_maximumValue;
@property(retain, nonatomic) NSNumber *minimumValue; // @synthesize minimumValue=_minimumValue;
- (void).cxx_destruct;
@property(readonly, nonatomic) WFImage *maximumIcon;
@property(readonly, nonatomic) WFImage *minimumIcon;
- (BOOL)shouldAlignLabels;
- (id)defaultSerializedRepresentation;
- (id)initWithDefinition:(id)arg1;
- (Class)singleStateClass;

@end

