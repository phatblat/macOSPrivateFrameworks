//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MLFeatureProvider.h"

@class MLMultiArray, NSSet;

@interface CRTextRecognizerModelInput : NSObject <MLFeatureProvider>
{
    MLMultiArray *_img_input;
}

@property(retain, nonatomic) MLMultiArray *img_input; // @synthesize img_input=_img_input;
- (void).cxx_destruct;
- (id)featureValueForName:(id)arg1;
@property(readonly, nonatomic) NSSet *featureNames;
- (id)initWithImg_input:(id)arg1;

@end

