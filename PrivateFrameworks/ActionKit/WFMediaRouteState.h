//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFVariableSubstitutableParameterState.h"

@class MPAVRoute;

@interface WFMediaRouteState : WFVariableSubstitutableParameterState
{
    MPAVRoute *_route;
}

+ (id)valueFromSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;
+ (id)serializedRepresentationFromValue:(id)arg1;
+ (Class)processingValueClass;
@property(readonly, nonatomic) MPAVRoute *route; // @synthesize route=_route;
- (void).cxx_destruct;
- (id)initWithRoute:(id)arg1;

@end

