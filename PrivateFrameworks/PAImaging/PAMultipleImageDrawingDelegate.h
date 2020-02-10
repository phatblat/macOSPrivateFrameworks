//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PAImageDrawingDelegate.h"

@class NSArray, NSString;

@interface PAMultipleImageDrawingDelegate : NSObject <PAImageDrawingDelegate>
{
    NSArray *_imageKeys;
}

- (void).cxx_destruct;
- (id)drawImage:(id)arg1 inRect:(struct CGRect)arg2 display:(id)arg3 transform:(id)arg4 context:(id)arg5;
- (id)drawImageLayer:(id)arg1 inRect:(struct CGRect)arg2 display:(id)arg3 transform:(id)arg4 context:(id)arg5;
- (id)initWithImageKeys:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
