//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDDuplicateDetector.h>

@class NSSet, NSString;

@interface RDDuplicateDetectorModelSets : RDDuplicateDetector
{
    NSSet *_srcModels;
    NSSet *_targetModels;
    NSString *_keyPathName;
}

- (void).cxx_destruct;
- (void)filterWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithSourceModels:(id)arg1 targetModels:(id)arg2 keyPathName:(id)arg3;

@end

