//
//  AppDelegate.h
//  IOS-systemDesign
//
//  Created by Iti Agrawal on 03/04/19.
//  Copyright © 2019 inmobi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

