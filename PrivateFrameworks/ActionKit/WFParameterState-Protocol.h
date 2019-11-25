//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCopying.h"
#import "WFVariableSerialization.h"

@class NSArray, WFParameter, WFVariable;

@protocol WFParameterState <NSCopying, WFVariableSerialization>
- (NSArray *)containedVariables;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@optional
+ (Class)processingValueClass;
- (id)initWithVariable:(WFVariable *)arg1;
- (void)processWithVariableSource:(id <WFVariableDataSource>)arg1 parameter:(WFParameter *)arg2 isInputParameter:(BOOL)arg3 userInputRequiredHandler:(void (^)(id <WFParameterState>))arg4 valueHandler:(void (^)(id <NSSecureCoding>, NSError *))arg5;
- (void)processWithVariableSource:(id <WFVariableDataSource>)arg1 parameter:(WFParameter *)arg2 environment:(long long)arg3 userInputRequiredHandler:(void (^)(id <WFParameterState>))arg4 valueHandler:(void (^)(id <NSSecureCoding>, NSError *))arg5;
- (void)processWithVariableSource:(id <WFVariableDataSource>)arg1 parameter:(WFParameter *)arg2 userInputRequiredHandler:(void (^)(id <WFParameterState>))arg3 valueHandler:(void (^)(id <NSSecureCoding>, NSError *))arg4;
@end

