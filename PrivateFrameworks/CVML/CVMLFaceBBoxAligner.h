//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CVML/CVMLDetector.h>

@interface CVMLFaceBBoxAligner : CVMLDetector
{
    struct shared_ptr<vision::mod::FaceboxAligner> mFaceBoxAlignerImpl;
}

+ (BOOL)shouldDumpDebugIntermediates;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)processWithOptions:(id)arg1 warningRecorder:(id)arg2 error:(id *)arg3;
- (void)dealloc;
- (id)initWithOptions:(id)arg1 error:(id *)arg2;

@end
