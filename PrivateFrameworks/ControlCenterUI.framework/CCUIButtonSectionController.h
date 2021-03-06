/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

@interface CCUIButtonSectionController : CCUIControlCenterSectionViewController <CCUIButtonControllerDelegate, CCUIButtonStackPagingViewDelegate, _UISettingsKeyPathObserver> {
    NSMutableDictionary * _moduleControllersByID;
    NSMutableArray * _modules;
    NSMutableDictionary * _modulesByID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CCUIControlCenterButtonSectionSettings *settings;
@property (readonly) Class superclass;

+ (Class)buttonControllerClass;
+ (Class)viewClass;

- (void).cxx_destruct;
- (void)_activateModule:(id)arg1;
- (void)_addButtonModule:(id)arg1;
- (id)_allButtonControllers;
- (id)_allButtonModules;
- (bool)_buttonEnabledForIdentifier:(id)arg1;
- (id)_controllerForIdentifier:(id)arg1;
- (id)_controllerForModule:(id)arg1;
- (void)_deactivateModule:(id)arg1;
- (void)_reloadModulesFromScratch;
- (id)_sortKeyForModule:(id)arg1;
- (id)_supportedButtonModuleClasses;
- (void)_updateSettings;
- (void)beginSuppressingPunchOutMaskCachingForReason:(id)arg1;
- (void)buttonController:(id)arg1 publishStatusUpdate:(id)arg2;
- (bool)buttonControllerShouldUseSmallButtons:(id)arg1;
- (void)controlCenterDidDismiss;
- (void)controlCenterWillPresent;
- (void)dealloc;
- (bool)dismissModalFullScreenIfNeeded;
- (void)endSuppressingPunchOutMaskCachingForReason:(id)arg1;
- (id)init;
- (id)sectionIdentifier;
- (id)settings;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;
- (id)view;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
