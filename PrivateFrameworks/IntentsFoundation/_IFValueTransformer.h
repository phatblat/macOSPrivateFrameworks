//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSValueTransformer.h"

__attribute__((visibility("hidden")))
@interface _IFValueTransformer : NSValueTransformer
{
    CDUnknownBlockType _forwardTransformation;
    CDUnknownBlockType _reverseTransformation;
}

+ (BOOL)allowsReverseTransformation;
@property(readonly, copy, nonatomic) CDUnknownBlockType reverseTransformation; // @synthesize reverseTransformation=_reverseTransformation;
@property(readonly, copy, nonatomic) CDUnknownBlockType forwardTransformation; // @synthesize forwardTransformation=_forwardTransformation;
- (void).cxx_destruct;
- (id)reverseTransformedValue:(id)arg1;
- (id)transformedValue:(id)arg1;
- (id)initWithForwardTransformation:(CDUnknownBlockType)arg1 reverseTransformation:(CDUnknownBlockType)arg2;

@end
