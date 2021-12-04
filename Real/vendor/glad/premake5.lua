project "Glad"
    kind "StaticLib"
    language "C"
    
	targetdir ("bin/" .. outputdir .. "/%{prj.name}")
    objdir ("bin-int/" .. outputdir .. "/%{prj.name}")

	files
	{
        "include/Glad/glad.h",
        "include/KHR/khrplatform.h",
        "src/glad.c"
    }


    includedirs
    {
        "include"
    }
    
	filter "system:windows"
        buildoptions { "-std=c11", "-lgdi32" }
        systemversion "latest"
        staticruntime "On"

		defines 
		{ 
            "_GLFW_WIN32",
            "_CRT_SECURE_NO_WARNINGS"
		}
    filter { "system:windows", "configurations:Release" }
        buildoptions "/MT"