.PHONY: clean All

All:
	@echo "----------Building project:[ UVa-10963-The-Swallowing-Ground - Debug ]----------"
	@cd "UVa-10963-The-Swallowing-Ground" && "$(MAKE)" -f  "UVa-10963-The-Swallowing-Ground.mk"
clean:
	@echo "----------Cleaning project:[ UVa-10963-The-Swallowing-Ground - Debug ]----------"
	@cd "UVa-10963-The-Swallowing-Ground" && "$(MAKE)" -f  "UVa-10963-The-Swallowing-Ground.mk" clean
