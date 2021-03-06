//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AXMImageCaptionModel : NSObject
{
    NSString *_preferredModelName;
}

- (void).cxx_destruct;
- (void)evaluate:(id)arg1;
- (id)_captionWithRequestHandler:(id)arg1 model:(id)arg2 error:(id *)arg3;
- (id)_captionWithRequestHandler:(id)arg1 usingExternalModelAtURL:(id)arg2 error:(id *)arg3;
- (id)_captionWithRequestHandler:(id)arg1 modelName:(id)arg2 error:(id *)arg3;
- (id)_stringForNextWordTensor:(id)arg1 tokens:(id)arg2;
- (id)_stringForTokenIndex:(long long)arg1 tokens:(id)arg2;
- (id)_imageFeatureVectorWithRequestHandler:(id)arg1 error:(id *)arg2;
- (id)_sceneObservationsWithRequestHandler:(id)arg1 error:(id *)arg2;
- (id)_tokenizerDictionary:(id *)arg1;
- (id)initWithModelName:(id)arg1;

@end

