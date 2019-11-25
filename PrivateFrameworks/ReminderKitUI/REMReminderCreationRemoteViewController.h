//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSRemoteViewController.h"

#import "REMReminderCreationRemoteViewController.h"

@class NSViewController<REMReminderCreationPublicViewController>;

@interface REMReminderCreationRemoteViewController : NSRemoteViewController <REMReminderCreationRemoteViewController>
{
    NSViewController<REMReminderCreationPublicViewController> *_publicViewController;
}

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
@property(nonatomic) __weak NSViewController<REMReminderCreationPublicViewController> *publicViewController; // @synthesize publicViewController=_publicViewController;
- (void).cxx_destruct;
- (void)viewHostDidDismiss;
- (void)viewServiceDidFinish;
- (void)viewServiceDidFailWithError:(id)arg1;
- (void)viewServiceDidCancel;
- (void)viewServicePreferredSizeDidChange:(struct CGSize)arg1;
@property(readonly, nonatomic, getter=viewServiceViewController) id <REMReminderCreationViewServiceViewController> viewServiceViewController;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end

